/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SBDataPlanAlertItem.h"

@class NSString;

@interface SBDataPlanCompletionAlertItem : SBDataPlanAlertItem {
	NSString *_carrierName;	// 16 = 0x10
	BOOL _newAccount;	// 20 = 0x14
}
@property(copy, nonatomic) NSString *carrierName;	// G=0xfb45d; S=0xfb4cd; @synthesize=_carrierName
@property(assign, nonatomic, getter=isNewAccount) BOOL newAccount;	// G=0xfb43d; S=0xfb44d; @synthesize=_newAccount
- (id)initWithCarrierName:(id)carrierName newAccount:(BOOL)account;	// 0xfb46d
- (void)dealloc;	// 0xfb695
- (void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;	// 0xfb4f1
// declared property getter: - (BOOL)isNewAccount;	// 0xfb43d
// declared property setter: - (void)setNewAccount:(BOOL)account;	// 0xfb44d
// declared property getter: - (id)carrierName;	// 0xfb45d
// declared property setter: - (void)setCarrierName:(id)name;	// 0xfb4cd
@end

