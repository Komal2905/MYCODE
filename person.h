#import <Foundation/Foundation.h>

int main(int argc, const char* argv[]){
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
   @interface Person : NSObject
@property *NSString *fName;

@property *NSString *lName;

@end
    [pool drain];
    return 0;
}
