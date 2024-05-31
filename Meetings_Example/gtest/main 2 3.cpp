#include"SetOperations.h"

int main() {
    int Q;
    std::cout<<"Enter Number of Queries (1-9): ";
    std::cin >> Q;
    while(Q<1 || Q>9){
        std::cout<<"Invalid Input!\nPlease Enter a Number Between 1 And 9: ";
        std::cin>>Q;
    }

    std::unique_ptr<SetOperations> set_ops = std::make_unique<SetOperations>();
    int query=1;

    while (Q--){
        int type, x;
        std::cout<<"Query_"<<query++<<": ";
        std::cin>>type>>x;
        while(type<1 || type>3 || x<1 || x>10) {
            std::cout<<"Invalid Input!\nPlease Enter Valid Type (1, 2, or 3) and Value (1-10)\n";
            std::cout<<"Query_"<<query++<<": ";
            std::cin>>type>>x;
        }

        switch(type){
            case 1:
                set_ops->add(x);
                break;
            case 2:
                set_ops->remove(x);
                break;
            case 3:
                bool result = set_ops->check(x);
                if(result){
                    std::cout<<"Yes"<<std::endl;
                } else{ 
                    std::cout<<"No"<<std::endl;
                }
                break;
        }
    }

    std::cout<<"Elements in the set: ";
    set_ops->display();

    return 0;
}