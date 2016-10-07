
#import <UIKit/UIKit.h>
/// 方便使用UIView position
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


#pragma mark - Set Anchor Point
/**
 *  设置锚点
 *
 *  @param anchorPoint 锚点
 */
- (void)setAnchorPoint:(CGPoint)anchorPoint;

/**
 *  根据锚点设置位置
 *
 *  @param point       位置
 *  @param anchorPoint 锚点
 */
- (void)setPosition:(CGPoint)point atAnchorPoint:(CGPoint)anchorPoint;

@end
