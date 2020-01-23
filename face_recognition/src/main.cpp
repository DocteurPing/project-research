#include <openbr/openbr_plugin.h>

int main(int argc, char **argv) {
    br::Context::initialize(argc, argv);

    QSharedPointer<br::Transform> transform = br::Transform::fromAlgorithm("FaceRecognition");
    QSharedPointer<br::Distance> distance = br::Distance::fromAlgorithm("FaceRecognition");

    br::Template picture1("test6.jpg");
    br::Template picture2("test6.jpg");

    picture1 >> *transform;
    picture2 >> *transform;
    
    float comparaison = distance->compare(picture1, picture2);
    
    printf("Match Score: %f\n", comparaison);
    
    br::Context::finalize();
    
    return 0;
}