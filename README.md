# C-Plus-PLus

### Classes Notes


```cpp
class DataBaseConnection
{
    private:
    std::string connectionString;
    bool connected = false;

    public:
    DataBaseConnection();
    DataBaseConnection(std::string connStr);
    DataBaseConnection(std::string connStr , bool conn);

    void print_server_state(void);

};
