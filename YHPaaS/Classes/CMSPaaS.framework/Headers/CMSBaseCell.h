//
//  CMSComponentsBaseCell.h
//  CMSPaaS
//
//  Created by 李嘉 on 2020/9/23.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface CMSBaseCell : UITableViewCell
//
-(void)setSubheading:(NSString *)subheading;
-(void)setExplain:(NSString *)explain;
-(void)setSubheading:(NSString *)subheading explain:(NSString *)explain;

@property (nonatomic, strong) UILabel *subheadingLabel;
@property (nonatomic, strong) UILabel *explainLabel;
@property (nonatomic, strong) UIView *explainBGView;

-(NSAttributedString *)getExplainText:(NSString *)explain;
@end

NS_ASSUME_NONNULL_END
