//
//  CMSSegmentHeaderView+CMSTheme.h
//  CMSPaaS
//
//  Created by sway on 2020/12/24.
//

#import "CMSSegmentHeaderView.h"


NS_ASSUME_NONNULL_BEGIN

@interface CMSSegmentHeaderView (CMSTheme)
@property (nonatomic, copy) NSString *selectedColorKey;
@property (nonatomic, copy) NSString *normalColorKey;
- (void)setThemeBackgroundColor:(NSString *)key;
- (void)setIndicatorViewBackgroundColor:(NSString *)key;
- (void)setLineBackgroundColor:(NSString *)key;
- (void)configDefaultTheme;
- (void)setItems:(NSArray<CMSSegmentButtonItem *> *)items;
@end

@interface CMSSegmentButton (CMSTheme)
- (void)setTitleColorWithKeyForStateNormal:(NSString *)keyNormal andStateSelected:(NSString *)keySelected;
@end

NS_ASSUME_NONNULL_END
