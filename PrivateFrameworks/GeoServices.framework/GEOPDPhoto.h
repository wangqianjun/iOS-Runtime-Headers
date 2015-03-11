/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class NSMutableArray, NSString;

@interface GEOPDPhoto : PBCodable <NSCopying> {
    NSString *_photoId;
    NSMutableArray *_photoVersions;
}

@property(readonly) bool hasPhotoId;
@property(retain) NSString * photoId;
@property(retain) NSMutableArray * photoVersions;

- (void)addPhotoVersion:(id)arg1;
- (void)clearPhotoVersions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPhotoId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)photoId;
- (id)photoVersionAtIndex:(unsigned long long)arg1;
- (id)photoVersions;
- (unsigned long long)photoVersionsCount;
- (bool)readFrom:(id)arg1;
- (void)setPhotoId:(id)arg1;
- (void)setPhotoVersions:(id)arg1;
- (void)writeTo:(id)arg1;

@end