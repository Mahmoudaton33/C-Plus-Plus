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
```
### Delegating constructor
```cpp
DataBaseConnection::DataBaseConnection():DataBaseConnection("local::192.168.9.56" , true)
{

}
DataBaseConnection::DataBaseConnection(std::string connStr):DataBaseConnection(connStr , true)
{
    
}

DataBaseConnection::DataBaseConnection(std::string connStr , bool conn):connectionString{connStr},connected{conn}
{
    
}
void DataBaseConnection::print_server_state(void)
{
    std::cout << "server name >> "<< connectionString << std::endl;
    std::cout << "server state >> "<< connected << std::endl;
}
```
