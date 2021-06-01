//
//  CMSAdvancedSetupHeaderView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/10/14.
//

#import <UIKit/UIKit.h>
#import "CMSFoldTableViewSectionHeaderViewProtocol.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSAdvancedSetupHeaderModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign, getter=isSwitchOn) BOOL switchOn;
@property (nonatomic, copy) NSString *subheading;
@property (nonatomic, copy) NSString *remindUri;
@property (nonatomic, copy) NSString *remindBtnUrl;
@property (nonatomic, copy) NSString *bindHeaderName;
@property (nonatomic, copy) NSString *enableField;

@end

typedef void(^explainClickBlock)(void);
typedef void(^switchBlock)(BOOL on);

@interface CMSAdvancedSetupHeaderView : UITableViewHeaderFooterView<CMSFoldTableViewSectionHeaderViewProtocol>

@property (nonatomic, strong) CMSAdvancedSetupHeaderModel *model;

@property(nonatomic,copy) switchBlock switchBlock;

@end

NS_ASSUME_NONNULL_END
