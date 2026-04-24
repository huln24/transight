#include <fmt/core.h>
#include <sqlite3.h>

int main() {
    sqlite3* db;

    if (sqlite3_open("transit.db", &db)) {
        fmt::print("Failed to open database\n");
        return 1;
    }

    fmt::print("Database opened successfully!\n");

    sqlite3_close(db);
    return 0;
}