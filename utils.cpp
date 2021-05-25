#include "utils.h"

QFont setupFont(QFont font, bool bold, int size)
{
    font.setBold(bold);
    font.setPointSize(size);

    return font;
}
