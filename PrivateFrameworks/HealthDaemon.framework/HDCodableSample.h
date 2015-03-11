/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@class HDCodableObject;

@interface HDCodableSample : PBCodable <NSCopying> {
    struct { 
        unsigned int dataType : 1; 
        unsigned int endDate : 1; 
        unsigned int startDate : 1; 
    long long _dataType;
    double _endDate;
    } _has;
    HDCodableObject *_object;
    double _startDate;
}

@property long long dataType;
@property double endDate;
@property bool hasDataType;
@property bool hasEndDate;
@property(readonly) bool hasObject;
@property bool hasStartDate;
@property(retain) HDCodableObject * object;
@property double startDate;

- (void).cxx_destruct;
- (id)_decodedObjectTypeOfClass:(Class)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataType;
- (id)decodedCategoryType;
- (id)decodedCorrelationType;
- (id)decodedEndDate;
- (id)decodedQuantityType;
- (id)decodedStartDate;
- (id)decodedWorkoutType;
- (id)description;
- (id)dictionaryRepresentation;
- (double)endDate;
- (bool)hasDataType;
- (bool)hasEndDate;
- (bool)hasObject;
- (bool)hasStartDate;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)object;
- (bool)readFrom:(id)arg1;
- (void)setDataType:(long long)arg1;
- (void)setEndDate:(double)arg1;
- (void)setHasDataType:(bool)arg1;
- (void)setHasEndDate:(bool)arg1;
- (void)setHasStartDate:(bool)arg1;
- (void)setObject:(id)arg1;
- (void)setStartDate:(double)arg1;
- (double)startDate;
- (void)writeTo:(id)arg1;

@end