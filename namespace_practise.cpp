#include<iostream>
using namespace std;
namespace photo_attributes{

 void image_creation(int width, int length){
     std::cout<< "image has been created" <<std::endl;
 }
void deletion_image(int path){

    std::cout << "image has been deleted"<< path<< std::endl;
}
//nested name space photo_attibutes::blur::editing_image
    namespace blur{
        void editing_image(int values){
            std::cout<<"the image has been edited"<<values <<std::endl;
        }
}

void add_image(int name){
    std::cout<<"enter the new image name" <<name<< std:: endl;
}

}

int main(int argc, const char** argv) {
photo_attributes::deletion_image(200);

photo_attributes::image_creation(200,300);

photo_attributes::blur::editing_image(400);

photo_attributes::add_image(10);
    return 0;
}
