#include <openbr/openbr_plugin.h>
#include <QCoreApplication>
#include <QRunnable>
#include <QThreadPool>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char **argv) {
    /*br::Context::initialize(argc, argv);

    QSharedPointer<br::Transform> transform = br::Transform::fromAlgorithm("FaceRecognition");
    QSharedPointer<br::Distance> distance = br::Distance::fromAlgorithm("FaceRecognition");

    br::Template picture1(argv[1]);
    br::Template picture2(argv[2]);

    picture1 >> *transform;
    picture2 >> *transform;
    
    float comparaison = distance->compare(picture1, picture2);
    
    printf("Match Score: %f\n", comparaison);
    
    br::Context::finalize();*/
    br::Enroll(br::File(argv[1]), argv[2]);

    
    return 0;
}
