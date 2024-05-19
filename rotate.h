#ifndef ROTATE_H
#define ROTATE_H
/**
 * Rotate the elements in the range [front, end) so that the element pointed to by middle becomes the first element.
 * An alternative to memcpy() for rotating elements.
*/
void rotate(void* front, void* middle, void* end);


#endif // ROTATE_H

