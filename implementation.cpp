#include "implementation.h"

void implementation::addLine(const DRW_Line &data) {
    std::cout << "#####################\n";
    std::cout << "#       Line        #\n";
    std::cout << "#####################\n\n";
    std::cout << "Start \n X\t Y\n";
    std::cout << data.basePoint.x;
    std::cout << "\t";
    std::cout << data.basePoint.y;
    std::cout << "\n";
    std::cout << "End \n X\t Y\n";
    std::cout << data.secPoint.x;
    std::cout << "\t";
    std::cout << data.secPoint.y;
    std::cout << "\n";
}

void implementation::addCircle(const DRW_Circle &data) {
    std::cout << "#####################\n";
    std::cout << "#       Circle      #\n";
    std::cout << "#####################\n\n";
    std::cout << "Radius:\n"<<data.radious;
    std::cout << "\nCenter\n";
    std::cout << "X\t Y\n";
    std::cout << data.basePoint.x;
    std::cout << "\t";
    std::cout << data.basePoint.y;
    std::cout << "\n";
}

void implementation::addEllipse(const DRW_Ellipse &data) {
    std::cout << "#####################\n";
    std::cout << "#      Ellipse      #\n";
    std::cout << "#####################\n\n";
    std::cout << "Ratio:\n"<<data.ratio;
    std::cout << "\n\n";
    std::cout << "Start Parameters:\n"<<data.staparam;
    std::cout << "\n\n";
    std::cout << "End Parameters:\n"<<data.endparam;
    std::cout << "\n\n";
    std::cout << "X\t Y\n";
    std::cout << data.basePoint.x;
    std::cout << "\t";
    std::cout << data.basePoint.y;
    std::cout << "\n";
    std::cout << "End \n X\t Y\n";
    std::cout << data.secPoint.x;
    std::cout << "\t";
    std::cout << data.secPoint.y;
    std::cout << "\n";
}

void implementation::addArc(const DRW_Arc &data) {
    std::cout << "#####################\n";
    std::cout << "#         Arc       #\n";
    std::cout << "#####################\n\n";
    std::cout << "Start Angle\n"<<data.staangle;
    std::cout << "\n\n";
    std::cout << "End Angle\n"<<data.endangle;
    std::cout << "\n";
}


void implementation::addPoint(const DRW_Point &data) {
    std::cout << "#####################\n";
    std::cout << "#       Point       #\n";
    std::cout << "#####################\n\n";
    std::cout << "Base Point \n X\t Y\n";
    std::cout << data.basePoint.x;
    std::cout << "\t";
    std::cout << data.basePoint.y;
    std::cout << "\n";
    std::cout << "External Point \n X\t Y\n";
    std::cout << data.extPoint.x;
    std::cout << "\t";
    std::cout << data.extPoint.y;
    std::cout << "\n";
}

void implementation::addLWPolyline(const DRW_LWPolyline &data) {
    std::cout << "#####################\n";
    std::cout << "#      PolyLine     #\n";
    std::cout << "#####################\n\n";
    std::cout << "Vertex\n X\t Y\n";
    std::cout << data.vertex->x;
    std::cout << "\t";
    std::cout << data.vertex->y;
    std::cout << "\n\n";
    std::cout << "Start-End Width\n";
    std::cout << data.vertex->stawidth;
    std::cout << "\t";
    std::cout << data.vertex->endwidth;
    std::cout << "\n\n";
    std::cout << "Elevation\n";
    std::cout << data.elevation;
    std::cout << "\n\n";
    std::cout << "External Points\n";
    std::cout << "X \t Y\n";
    std::cout << data.extPoint.x;
    std::cout << "\t";
    std::cout << data.extPoint.y;
    std::cout << "\n";
}
