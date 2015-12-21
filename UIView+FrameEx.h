
#import <UIKit/UIKit.h>

@interface UIView (FrameEx)

@property (nonatomic) CGFloat x;

@property (nonatomic) CGFloat y;

@property (nonatomic) CGFloat bottom;

@property (nonatomic) CGFloat right;

@property (nonatomic) CGFloat centerX;

@property (nonatomic) CGFloat centerY;

@property (nonatomic) CGFloat width;

@property (nonatomic) CGFloat height;

@property (nonatomic) CGPoint origin;

@property (nonatomic) CGSize size;

- (void)setAnchorPoint:(CGPoint)anchorPoint;
- (void)setPosition:(CGPoint)point atAnchorPoint:(CGPoint)anchorPoint;

@end
