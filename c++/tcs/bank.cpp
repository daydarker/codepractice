#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
    int initial_balance;
    cout << "Enter the initial balance: ";
    cin >> initial_balance;

    int n;
    cout << "Enter the number of operations to be performed: ";
    cin >> n;

    vector<pair<string, int>> arr; // Vector to store operations and amounts
    vector<int> transaction_indices; // To store indices of credit and debit operations

    // Input operations
    for (int i = 0; i < n; i++) {
        string operation;
        int amount;
        cout << "Enter operation (credit, debit, commit, abort, read) and amount (integer): ";
        cin >> operation >> amount;
        arr.push_back({operation, amount});

        // Track transactions (only credit and debit)
        if (operation == "credit" || operation == "debit") {
            transaction_indices.push_back(i);
        }
    }

    bool committed = false; // Tracks if transactions have been committed

    // Process operations
    for (int i = 0; i < n; i++) {
        if (arr[i].first == "credit") {
            initial_balance += arr[i].second;
        } else if (arr[i].first == "debit") {
            initial_balance -= arr[i].second;
        } else if (arr[i].first == "commit") {
            committed = true; // Mark all transactions as committed
        } else if (arr[i].first == "abort") {
            if (committed) {
                cout << "Cannot abort transactions after commit." << endl;
            } else {
                int x = arr[i].second; // The Xth transaction to abort
                if (x > 0 && x <= transaction_indices.size()) {
                    int tx_index = transaction_indices[x - 1]; // Get the index of the Xth transaction
                    if (arr[tx_index].first == "credit") {
                        initial_balance -= arr[tx_index].second; // Revert credit
                    } else if (arr[tx_index].first == "debit") {
                        initial_balance += arr[tx_index].second; // Revert debit
                    }
                    cout << "Transaction " << x << " aborted." << endl;
                } else {
                    cout << "Invalid transaction number: " << x << endl;
                }
            }
        } else if (arr[i].first == "read") {
            cout << "Current balance: " << initial_balance << endl;
        }
    }

    // Final balance
    cout << "Final balance: " << initial_balance << endl;

    return 0;
}
