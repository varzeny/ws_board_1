#include <rclcpp/rclcpp.hpp>


// 보드와 연결된 시리얼 포트를 읽고 알맞은 콜백을 발동시키며, 특정 노드를 구독 하는 보드제어 노드
class NodeBoard : public rclcpp::Node
{
    public:


        NodeBoard();
        ~NodeBoard();

};