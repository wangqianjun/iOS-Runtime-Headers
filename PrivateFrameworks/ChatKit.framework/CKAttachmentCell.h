/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAttachmentItem, NSObject<CKAttachmentCellDelegate>, UIImageView;

@interface CKAttachmentCell : UICollectionViewCell {
    UIImageView *_checkmarkView;
    NSObject<CKAttachmentCellDelegate> *_delegate;
    CKAttachmentItem *_representedObject;
    bool_editing;
}

@property(retain) UIImageView * checkmarkView;
@property NSObject<CKAttachmentCellDelegate> * delegate;
@property(getter=isEditing) bool editing;
@property(retain) CKAttachmentItem * representedObject;

- (id)checkmarkView;
- (void)copy:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)delete:(id)arg1;
- (bool)isEditing;
- (void)layoutSubviews;
- (void)more:(id)arg1;
- (id)representedObject;
- (void)saveAttachment:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditing:(bool)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)setSelected:(bool)arg1;

@end