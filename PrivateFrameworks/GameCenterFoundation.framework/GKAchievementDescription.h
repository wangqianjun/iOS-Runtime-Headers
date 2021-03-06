/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@class GKAchievementInternal, NSString, UIImage;

@interface GKAchievementDescription : NSObject <NSCoding, NSSecureCoding> {
    UIImage *_image;
    GKAchievementInternal *_internal;
}

@property(copy,readonly) NSString * achievedDescription;
@property(retain,readonly) NSString * groupIdentifier;
@property(getter=isHidden,readonly) BOOL hidden;
@property(copy,readonly) NSString * identifier;
@property(retain) UIImage * image;
@property(retain) GKAchievementInternal * internal;
@property(readonly) int maximumPoints;
@property(getter=isReplayable,readonly) BOOL replayable;
@property(copy,readonly) NSString * title;
@property(copy,readonly) NSString * unachievedDescription;

+ (id)incompleteAchievementImage;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (BOOL)instancesRespondToSelector:(SEL)arg1;
+ (void)loadAchievementDescriptionsForGame:(id)arg1 withCompletionHandler:(id)arg2;
+ (void)loadAchievementDescriptionsWithCompletionHandler:(id)arg1;
+ (id)placeholderCompletedAchievementImage;
+ (BOOL)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (unsigned int)hash;
- (id)image;
- (id)imageURL;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)internal;
- (BOOL)isEqual:(id)arg1;
- (void)loadImageWithCompletionHandler:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)setImage:(id)arg1;
- (void)setInternal:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)showBanner;
- (id)valueForUndefinedKey:(id)arg1;

@end
