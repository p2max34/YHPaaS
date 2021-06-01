//
//  CMSComponentsGeneralCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/10.
//

#import <UIKit/UIKit.h>
#import "CMSBaseCell.h"

NS_ASSUME_NONNULL_BEGIN

@interface CMSComponentsGeneralModel : NSObject

@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSString *details;
@property (nonatomic, copy) NSString *subheading;
@property (nonatomic, copy) NSString *explain;
@property (nonatomic, copy) NSString *bageImageUrl;
@property (nonatomic, copy) NSString *hintImageUrl;
@property (nonatomic, assign, getter=isShowBage) BOOL showBage;
@property (nonatomic, copy) NSString *uri;

@end

@interface CMSComponentsGeneralCell : CMSBaseCell

@property (nonatomic, strong) CMSComponentsGeneralModel *model;

@end

NS_ASSUME_NONNULL_END
