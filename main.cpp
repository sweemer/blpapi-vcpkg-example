#include <blpapi_versioninfo.h>
#include <iostream>

int main() {
	std::cout << "Hello, BLPAPI!" << std::endl;
	std::cout << "header version  : " << BloombergLP::blpapi::VersionInfo::headerVersion() << std::endl;
	std::cout << "runtime version : " << BloombergLP::blpapi::VersionInfo::runtimeVersion() << std::endl;
}
