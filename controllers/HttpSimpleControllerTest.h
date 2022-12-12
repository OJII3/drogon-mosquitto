#pragma once

#include <drogon/HttpSimpleController.h>

using namespace drogon;

class HttpSimpleControllerTest : public drogon::HttpSimpleController<HttpSimpleControllerTest> {
public:
    void asyncHandleHttpRequest(const HttpRequestPtr &req,
                                        std::function<void(const HttpResponsePtr &)> &&callback) override;

    PATH_LIST_BEGIN
        PATH_ADD("/test", Get);
    PATH_LIST_END
};