/* Generated by RuntimeBrowser on iPhone OS 3.0
   Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@class NSMutableArray, NSMutableData, NSMutableDictionary;



@interface MLPhotoBakedThumbnails : NSObject 
{
    NSInteger _format;
    NSInteger _singleThumbnailImageLength;
    NSInteger _count;
    NSMutableData *_thumbnailData;
    NSMutableArray *_thumbnailImages;
    NSMutableDictionary *_options;
    BOOL _optionsAccessed;
}

@property(retain,readonly) NSMutableDictionary *options;
@property(readonly) CGSize size;
@property(readonly) NSInteger bitsPerComponent;
@property(readonly) NSInteger bytesPerPixel;
@property(readonly) NSUInteger bitmapInfo;
@property(readonly) CGRect imageRect;

+ (id)thumbnailsWithContentsOfFile:(id)arg1 format:(NSInteger)arg2;
+ (BOOL)saveBakedThumbnailsOfImages:(id)arg1 toFile:(id)arg2 format:(NSInteger)arg3 orientation:(NSInteger*)arg4 options:(id)arg5 delegate:(id)arg6;

- (id)initWithContentsOfFile:(id)arg1 format:(NSInteger)arg2;
- (id)initWithImages:(id)arg1 format:(NSInteger)arg2 orientation:(NSInteger*)arg3 options:(id)arg4 delegate:(id)arg5;
- (void)dealloc;
- (BOOL)saveToFile:(id)arg1;
- (NSInteger)count;
- (id)thumbnailDataAtIndex:(NSInteger)arg1;
- (char *)thumbnailBytesAtIndex:(NSInteger)arg1;
- (struct CGImage { }*)thumbnailImageAtIndex:(NSInteger)arg1;
- (id)options;
- (NSInteger)bitsPerComponent;
- (NSInteger)bytesPerPixel;
- (struct CGSize { float x1; float x2; })size;
- (NSUInteger)bitmapInfo;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRect;
- (BOOL)writeBorderedThumbnailOfImage:(struct CGImage { }*)arg1 toBuffer:(void*)arg2 orientation:(NSInteger*)arg3 format:(NSInteger)arg4 formatInfo:(const struct BorderedFormatInfo { NSInteger x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_3_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_3_1_2; } x3; struct CGRect { struct CGPoint { float x_1_2_1; float x_1_2_2; } x_4_1_1; struct CGSize { float x_2_2_1; float x_2_2_2; } x_4_1_2; } x4; NSUInteger x5; NSInteger x6; NSInteger x7; float x8[4]; float x9[4]; NSUInteger x10; }*)arg5 delegate:(id)arg6;

@end