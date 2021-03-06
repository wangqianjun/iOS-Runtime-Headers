/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@class GEOComposedWaypoint, NSString;

@interface GEONavigationRouteSummary : PBCodable <NSCopying> {
    struct { 
        unsigned int transportType : 1; 
    GEOComposedWaypoint *_destination;
    NSString *_destinationName;
    } _has;
    GEOComposedWaypoint *_origin;
    int _transportType;
}

@property(retain) GEOComposedWaypoint * destination;
@property(retain) NSString * destinationName;
@property(readonly) BOOL hasDestination;
@property(readonly) BOOL hasDestinationName;
@property(readonly) BOOL hasOrigin;
@property BOOL hasTransportType;
@property(retain) GEOComposedWaypoint * origin;
@property int transportType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)destination;
- (id)destinationName;
- (id)dictionaryRepresentation;
- (BOOL)hasDestination;
- (BOOL)hasDestinationName;
- (BOOL)hasOrigin;
- (BOOL)hasTransportType;
- (unsigned int)hash;
- (id)initWithRoute:(id)arg1 destinationName:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)origin;
- (BOOL)readFrom:(id)arg1;
- (void)setDestination:(id)arg1;
- (void)setDestinationName:(id)arg1;
- (void)setHasTransportType:(BOOL)arg1;
- (void)setOrigin:(id)arg1;
- (void)setRoute:(id)arg1;
- (void)setTransportType:(int)arg1;
- (int)transportType;
- (void)writeTo:(id)arg1;

@end
