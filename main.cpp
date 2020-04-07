#include <iostream>
#include <boost/asio.hpp>
#include <boost/beast/http.hpp>

int main() {
    std::cout << "Hello, World!" << std::endl;

    boost::beast::http::request<boost::beast::http::string_body> request;
    request.body() = "12313";
    return 0;
}
