//
//  CMSFinancialTagView.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/1.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSFinancialTagDetailsModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *imageUrl;

@end

@interface CMSFinancialTagModel : NSObject

@property (nonatomic, copy) NSString *headText;
@property (nonatomic, strong) NSArray<CMSFinancialTagDetailsModel *> *tag;

@end

@interface CMSFinancialTagView : UIView

@property (nonatomic, strong) CMSFinancialTagModel *model;

@end

@interface CMSFinancialTagModel (CMSExtention)

@end

NS_ASSUME_NONNULL_END
