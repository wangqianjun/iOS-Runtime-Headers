/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class TSMTraceBuffer;

@interface CPTracingManager : NSObject  {
    TSMTraceBuffer *mBuffer;
    unsigned int mCount;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)sharedManager;
+ (id)_singletonAlloc;

- (unsigned int)retainCount;
- (id)retain;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (oneway void)release;
- (id)autorelease;
- (void)setup;
- (void)teardown;

@end