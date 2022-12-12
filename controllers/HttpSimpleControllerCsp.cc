#include "HttpSimpleControllerCsp.h"

void HttpSimpleControllerCsp::asyncHandleHttpRequest(const drogon::HttpRequestPtr &req,
                                                    std::function<void(const drogon::HttpResponsePtr &)> &&callback) {
    LOG_DEBUG << "http simple controller csp";
    HttpViewData data;
    data.insert("title", "CSP View Test");
    data.insert("content", "This is a CSP view test.");
    data.insert("parameters", req->parameters());
    auto resp = drogon::HttpResponse::newHttpViewResponse("TestView.csp", data);
    callback(resp);
}