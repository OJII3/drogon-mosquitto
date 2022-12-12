#include "HttpSimpleControllerTest.h"

void HttpSimpleControllerTest::asyncHandleHttpRequest(const HttpRequestPtr &req,
                                                      std::function<void(const HttpResponsePtr &)> &&callback) {
    LOG_DEBUG << "http simple controller test";
    auto resp = HttpResponse::newHttpResponse();
    resp->setStatusCode(k200OK);
    resp->setBody("test");
    callback(resp);
}