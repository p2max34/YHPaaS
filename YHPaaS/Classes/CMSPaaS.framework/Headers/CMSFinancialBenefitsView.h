//
//  CMSFinancialBenefitsView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/2.
//

#import <UIKit/UIKit.h>

@interface CMSEarningsInformationModel : NSObject

@property (nonatomic, copy) NSString *financialData;
@property (nonatomic, copy) NSString *dataTime;
@property (nonatomic, copy) NSString *unit;

@end


@interface CMSFinancialBenefitsView : UIView

@property (nonatomic, strong) NSArray<CMSEarningsInformationModel *> *model;

@end
