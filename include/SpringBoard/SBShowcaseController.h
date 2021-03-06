/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBUnknownSuperclass.h"
#import "SpringBoard-Structs.h"

@class SBShowcaseViewController, UIWindow, UIView, SBSlidingViewHighlight, UIControl;

@interface SBShowcaseController : SBUnknownSuperclass {
	UIWindow *_hostWindow;	// 4 = 0x4
	UIView *_hostView;	// 8 = 0x8
	UIWindow *_showcaseWindow;	// 12 = 0xc
	UIView *_rootView;	// 16 = 0x10
	UIView *_contentView;	// 20 = 0x14
	UIControl *_blockingView;	// 24 = 0x18
	UIView *_clippingView;	// 28 = 0x1c
	UIView *_showcaseView;	// 32 = 0x20
	UIView *_topShadowView;	// 36 = 0x24
	UIView *_bottomShadowView;	// 40 = 0x28
	UIView *_hidingView;	// 44 = 0x2c
	SBSlidingViewHighlight *_separator;	// 48 = 0x30
	float _revealAmount;	// 52 = 0x34
	int _orientation;	// 56 = 0x38
	SBShowcaseViewController *_showcaseViewController;	// 60 = 0x3c
}
@property(retain, nonatomic) SBShowcaseViewController *showcase;	// G=0x1712b9; S=0x17227d; @synthesize=_showcaseViewController
@property(readonly, assign, nonatomic) UIControl *blockingView;	// G=0x1712a9; @synthesize=_blockingView
@property(retain, nonatomic) UIView *hostView;	// G=0x171299; S=0x1721e5; @synthesize=_hostView
@property(retain, nonatomic) UIView *hidingView;	// G=0x171289; S=0x1716a9; @synthesize=_hidingView
@property(assign, nonatomic) int orientation;	// G=0x171279; S=0x171745; @synthesize=_orientation
@property(readonly, assign, nonatomic) UIWindow *window;	// G=0x171269; @synthesize=_showcaseWindow
@property(assign, nonatomic) float revealAmount;	// G=0x171259; S=0x1721c5; @synthesize=_revealAmount
@property(assign, nonatomic) int revealMode;	// G=0x172005; S=0x172025; 
+ (float)fullRevealAmount;	// 0x17141d
- (id)init;	// 0x172371
- (void)dealloc;	// 0x1712c9
// declared property setter: - (void)setShowcase:(id)showcase;	// 0x17227d
// declared property setter: - (void)setHostView:(id)view;	// 0x1721e5
// declared property setter: - (void)setRevealAmount:(float)amount;	// 0x1721c5
- (CGRect)showcaseViewFrame;	// 0x17219d
- (float)bottomBarHeight;	// 0x17217d
- (void)setHidden:(BOOL)hidden;	// 0x17213d
- (void)setAlpha:(float)alpha;	// 0x1720fd
// declared property setter: - (void)setRevealMode:(int)mode;	// 0x172025
// declared property getter: - (int)revealMode;	// 0x172005
- (void)_updateShowcase;	// 0x171ad1
- (CGRect)_visibleShowcaseBounds;	// 0x171a11
- (float)_separatorAlphaForRevealAmount:(float)revealAmount;	// 0x1719d1
- (void)willAppear;	// 0x17194d
- (void)didAppear;	// 0x1718f1
- (void)willDisappear;	// 0x171895
- (void)didDisappear;	// 0x171825
- (void)willAnimateRotationToInterfaceOrientation:(int)interfaceOrientation;	// 0x1717d9
- (void)didRotateFromInterfaceOrientation:(int)interfaceOrientation;	// 0x171791
// declared property setter: - (void)setOrientation:(int)orientation;	// 0x171745
// declared property setter: - (void)setHidingView:(id)view;	// 0x1716a9
- (CGAffineTransform)_rootTransform;	// 0x17165d
- (CGRect)_contentFrame;	// 0x1715f9
- (CGRect)_portraitAdjustedFrameForFrame:(CGRect)frame;	// 0x17158d
- (CGRect)_adjustedContentFrameForFrame:(CGRect)frame;	// 0x171531
- (CGRect)_hostViewFrame;	// 0x1714d5
- (float)_showcaseRevealedAmount;	// 0x171469
// declared property getter: - (float)revealAmount;	// 0x171259
// declared property getter: - (id)window;	// 0x171269
// declared property getter: - (int)orientation;	// 0x171279
// declared property getter: - (id)hidingView;	// 0x171289
// declared property getter: - (id)hostView;	// 0x171299
// declared property getter: - (id)blockingView;	// 0x1712a9
// declared property getter: - (id)showcase;	// 0x1712b9
@end
