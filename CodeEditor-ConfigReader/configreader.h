#ifndef CONFIGREADER_H
#define CONFIGREADER_H
#include <map>
#include <fstream>
#include <string>
#include <utility>
#include <vector>

struct ConfException{
    std::string except;
    ConfException(std::string iskl):except(iskl){}
};

using Conf = std::map<std::string, std::string>;

class ConfigReader{
private:
    Conf mpConf;
    std::ifstream in;
    std::string path;
public:
    ConfigReader(std::string path);
    ~ConfigReader();
    Conf ReadAll();
    std::string ReadOne(const std::string& key);
    void IzmZn(std::string key, std::string value);
};
#endif // CONFIGREADER_H
