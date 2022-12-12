#include "WebsocketControllerTest.h"

void WebsocketControllerTest::handleNewMessage(const WebSocketConnectionPtr& wsConnPtr, std::string &&message, const WebSocketMessageType &type)
{
    LOG_DEBUG << "handleNewMessage";
    wsConnPtr->send(message);
}

void WebsocketControllerTest::handleNewConnection(const HttpRequestPtr &req, const WebSocketConnectionPtr& wsConnPtr)
{
    LOG_DEBUG << "handleNewConnection";
    // write your application logic here
}

void WebsocketControllerTest::handleConnectionClosed(const WebSocketConnectionPtr& wsConnPtr)
{
    // write your application logic here
}
