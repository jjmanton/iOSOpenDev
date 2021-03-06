/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: (null)
 */

#import "SpringBoard-Structs.h"
#import "SBUnknownSuperclass.h"

@protocol SBProximityDetectionClientDelegate;

@interface SBProximityDetectionClient : SBUnknownSuperclass {
	int _pid;	// 4 = 0x4
	unsigned _port;	// 8 = 0x8
	int _requestedMode;	// 12 = 0xc
	dispatch_source_s *_source;	// 16 = 0x10
	id<SBProximityDetectionClientDelegate> _delegate;	// 20 = 0x14
}
@property(assign, getter=PID, setter=setPID:) int pid;	// G=0x1804f9; S=0x180509; @synthesize=_pid
@property(assign) int requestedMode;	// G=0x1804d9; S=0x1804e9; @synthesize=_requestedMode
@property(assign, nonatomic) unsigned port;	// G=0x1804c9; S=0x1805f9; @synthesize=_port
@property(assign, nonatomic) id delegate;	// G=0x1804a9; S=0x1804b9; @synthesize=_delegate
- (id)init;	// 0x180579
- (id)initWithPID:(int)pid port:(unsigned)port delegate:(id)delegate;	// 0x180939
- (void)dealloc;	// 0x1808f9
- (id)description;	// 0x180861
- (BOOL)isValid;	// 0x18081d
// declared property setter: - (void)setPort:(unsigned)port;	// 0x1805f9
// declared property getter: - (id)delegate;	// 0x1804a9
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1804b9
// declared property getter: - (unsigned)port;	// 0x1804c9
// declared property getter: - (int)requestedMode;	// 0x1804d9
// declared property setter: - (void)setRequestedMode:(int)mode;	// 0x1804e9
// declared property getter: - (int)PID;	// 0x1804f9
// declared property setter: - (void)setPID:(int)pid;	// 0x180509
@end
