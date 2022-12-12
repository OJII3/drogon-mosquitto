#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class HttpSimpleControllerCsp: public drogon::HttpSimpleController<HttpSimpleControllerCsp> {
public:
    void asyncHandleHttpRequest(const drogon::HttpRequestPtr &req,
                                std::function<void(const drogon::HttpResponsePtr &)> &&callback) override;

    PATH_LIST_BEGIN
        PATH_ADD("/csp", Get);
    PATH_LIST_END
};
