/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UITextPosition;



@interface UITextInputArrowKeyHistory : NSObject 
{
    UITextPosition *startPosition;
    NSInteger amount;
    NSInteger anchor;
    UITextPosition *start;
    UITextPosition *end;
    UITextPosition *cursor;
    BOOL affinityDownstream;
}

@property NSInteger amount;
@property BOOL affinityDownstream;
@property(retain) UITextPosition *end;
@property(retain) UITextPosition *start;
@property(retain) UITextPosition *cursor;
@property NSInteger anchor;
@property(retain) UITextPosition *startPosition;


- (void)setAmount:(NSInteger)arg1;
- (void)setAffinityDownstream:(BOOL)arg1;
- (void)setEnd:(id)arg1;
- (void)setStart:(id)arg1;
- (void)setCursor:(id)arg1;
- (void)setAnchor:(NSInteger)arg1;
- (BOOL)affinityDownstream;
- (id)cursor;
- (NSInteger)anchor;
- (NSInteger)amount;
- (void)setStartPosition:(id)arg1;
- (id)startPosition;
- (id)start;
- (id)end;
- (void)dealloc;

@end