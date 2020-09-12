
#include "db.h"
#include "lefin.h"

#include <iostream>
using namespace odb;
using namespace std;
int main(int argc, char *argv[])
{
    dbDatabase* db = dbDatabase::create();
    lefin lefReader(db, false);
    dbLib* lib = lefReader.createTechAndLib("gscl45nm", "/home/xiebiwei/Projects/OpenDB/tests/data/gscl45nm.lef");
    cout<<lib->getName()<<"; "<< (lib->getSites().begin())->getHeight()<<"; "<<endl;
    cout<<endl;


//    std::cout<<"2"<<std::endl;
    return 0;
}
