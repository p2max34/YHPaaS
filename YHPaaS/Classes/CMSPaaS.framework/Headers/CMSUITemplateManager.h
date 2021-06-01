//
//  CMSUITemplateManager.h
//  CMSPaaS
//
//  Created by SJ on 2020/10/19.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@protocol CMSComponentFactory <NSObject>

- (UIView *)CMSComponentViewWithStyle:(NSDictionary *)style data:(id)data constraintWidth:(CGFloat)constraintWidth;

@optional
- (CGFloat)CMSComponentHeightWithStyle:(NSDictionary *)style data:(id)data constraintWidth:(CGFloat)constraintWidth;

@end

/// 目前只是 cell 使用的协议
@protocol CMSComponentCellConfig <NSObject>

- (void)CMSComponentCellConfigWithStyle:(NSDictionary *)style data:(id)data;

@end


@interface CMSUITemplateManager : NSObject

+ (instancetype)sharedInstance;

//templateData里面是对应组件名的key和数据源data，constraintWidth是限宽
- (UIView *)viewWithTemplateData:(NSDictionary *)templateData constraintWidth:(CGFloat)constraintWidth;

- (CGFloat)viewHeightWithTemplateData:(NSDictionary *)templateData constraintWidth:(CGFloat)constraintWidth;

/** TemplateName 配置方法
 *@param templateName   根据 TemplateName 查询 component 配置表 数据 { style 和 component }
 *@param cell   实现 CMSComponentCellConfig 协议的cell
 */
- (void)cellWithTemplateName:(NSString *)templateName data:(id)data tableViewCell:(UITableViewCell<CMSComponentCellConfig> *)cell;

/** template 配置方法
 *@param templateInfo   template 数据 { style 和 component }
 *@param data   data 数据 基础数据
 *@param cell   实现 CMSComponentCellConfig 协议的cell
 */
- (void)cellWithTemplate:(NSDictionary *)templateInfo data:(id)data  tableViewCell:(UITableViewCell<CMSComponentCellConfig> *)cell;

- (void)cellWillDisplayWithTemplateData:(NSDictionary *)templateData tableViewCell:(UITableViewCell<CMSComponentCellConfig> *)cell;

- (void)cellWithDidEndDisplayingTemplateData:(NSDictionary *)templateData tableViewCell:(UITableViewCell<CMSComponentCellConfig> *)cell;

//- (UITableViewCell *)tableViewcellWithTemplateNameData:(NSDictionary *)templateData constraintWidth:(CGFloat)constraintWidth tableView:(UITableView *)tableView cellClassName:(NSString *)cellClassName;

/// 注册方法
- (void)registFactoeyAtViewTypeKey:(NSString *)key factory:(id<CMSComponentFactory>)factory;
- (id<CMSComponentFactory>)readFactoryByKey:(NSString *)key;
- (void)removeFactoryByKey:(NSString *)key;

/// 注册cell
- (void)registFactoeyAtCellTypeKey:(NSString *)key cellName:(NSString *)cellName;
/// 根据 TemplateName 查询 component
- (NSString *)readCellClassNameByTemplateName:(NSString *)templateName;
/// 根据 TemplateName 查询 component
- (NSString *)readCellClassNameByTemplateInfo:(NSDictionary *)templateInfo;
/// 根据对应的key直接查询component对应的clsname
- (NSString *)readCellClassNameByComponent:(NSString *)component;
- (void)removeFactoryCellByKey:(NSString *)key;
@end
