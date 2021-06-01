//
//  CMSComponentsSwitchCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/23.
//

#import "CMSBaseCell.h"

typedef NS_ENUM(NSInteger, CMSAdvancedSetupTabelViewCellStyle) {
    CMSAdvancedSetupTabelViewCellStyleMonitoring,
    CMSAdvancedSetupTabelViewCellStyleDeviation,
    CMSAdvancedSetupTabelViewCellStyleGuarantee,
    CMSAdvancedSetupTabelViewCellStyleUnackedTime,
    CMSAdvancedSetupTabelViewCellStyleInflexion
};

NS_ASSUME_NONNULL_BEGIN

@interface CMSComponentsSwitchModel : NSObject

@property (nonatomic, copy) NSString *style;

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *subheading;
@property (nonatomic, copy) NSString *explain;
@property (nonatomic, copy) NSString *remindBtnUrl;
@property (nonatomic, assign) CGFloat percentage;
@property (nonatomic, assign, getter=isBuying) BOOL buying;
@property (nonatomic, assign, getter=isSwitchOn) BOOL switchOn;

@end

@interface CMSComponentsSwitchCell : CMSBaseCell
@property (nonatomic, strong) CMSComponentsSwitchModel *switchModel;
@end

NS_ASSUME_NONNULL_END
