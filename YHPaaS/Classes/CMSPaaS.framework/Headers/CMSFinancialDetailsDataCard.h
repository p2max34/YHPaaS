//
//  CMSFundDetailsView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/8/27.
//

#import <UIKit/UIKit.h>
#import "CMSFinancialTagView.h"
#import "CMSFinancialBenefitsView.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSFinancialDetailsModel : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *imageUrl;
@property (nonatomic, strong) CMSFinancialTagModel *tagModel;
@property (nonatomic, strong) NSArray<CMSEarningsInformationModel *> *financialData;

@end

@interface CMSFinancialDetailsDataCard : UIView

@property (nonatomic, strong) CMSFinancialDetailsModel *financial;

@end

NS_ASSUME_NONNULL_END
