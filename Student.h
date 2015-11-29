#import <Foundation/Foundation.h>

int main(int argc, const char* argv[]){
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    @interface Student : NSObject
@property NSString *fname;
@propert NSString *lname;
    [pool drain];
    return 0;
}
