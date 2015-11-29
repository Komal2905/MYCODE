#import <Foundation/Foundation.h>
#import <Student.h>

int main(int argc, const char* argv[]){
    NSAutoreleasePool *pool = [[NSAutoreleasePool alloc] init];
    @implementation Student
(NSString *)fullName;
{
   return [NSString stringWithFormat:@"%@ %@", self.fname, self.lname];
}
    [pool drain];
    return 0;
}
