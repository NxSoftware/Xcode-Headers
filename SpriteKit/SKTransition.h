//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface SKTransition : NSObject <NSCopying>
{
    // Error parsing type: ^{SKCTransitionNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@QfB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}BqBffBB{?=[4]}{?=[4]}i@BBff^{SKCSceneNode}^{SKCSceneNode}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_framebuffer>=^{jet_framebuffer}^{__shared_weak_count}}{shared_ptr<jet_framebuffer>=^{jet_framebuffer}^{__shared_weak_count}}fBBBB}, name: _skcTransitionNode
}

+ (id)transitionWithCIFilter:(id)arg1 duration:(double)arg2;
+ (id)doorwayWithDuration:(double)arg1;
+ (id)doorsCloseVerticalWithDuration:(double)arg1;
+ (id)doorsCloseHorizontalWithDuration:(double)arg1;
+ (id)doorsOpenVerticalWithDuration:(double)arg1;
+ (id)doorsOpenHorizontalWithDuration:(double)arg1;
+ (id)pushRightWithDuration:(double)arg1;
+ (id)pushLeftWithDuration:(double)arg1;
+ (id)pushDownWithDuration:(double)arg1;
+ (id)pushUpWithDuration:(double)arg1;
+ (id)moveInRightWithDuration:(double)arg1;
+ (id)moveInLeftWithDuration:(double)arg1;
+ (id)moveInDownWithDuration:(double)arg1;
+ (id)moveInUpWithDuration:(double)arg1;
+ (id)revealRightWithDuration:(double)arg1;
+ (id)revealLeftWithDuration:(double)arg1;
+ (id)revealDownWithDuration:(double)arg1;
+ (id)revealUpWithDuration:(double)arg1;
+ (id)flipVerticalWithDuration:(double)arg1;
+ (id)flipHorizontalWithDuration:(double)arg1;
+ (id)crossFadeWithDuration:(double)arg1;
+ (id)fadeWithColor:(id)arg1 duration:(double)arg2;
+ (id)fadeWithDuration:(double)arg1;
+ (id)pushWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)moveInWithDirection:(long long)arg1 duration:(double)arg2;
+ (id)revealWithDirection:(long long)arg1 duration:(double)arg2;
- (void)dealloc;
- (id)_filter;
-     // Error parsing type: ^{SKCTransitionNode=^^?@B{unordered_map<std::__1::basic_string<char>, SKAttributeValue *, std::__1::hash<std::__1::basic_string<char> >, std::__1::equal_to<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, SKAttributeValue *> > >={__hash_table<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true>, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true>, std::__1::allocator<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *> > >={unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >={__compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> **, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> > >=^^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}{__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >={__compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *> >=Q}}}}{__compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> > >={__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *> *>=^{__hash_node<std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, void *>}}}{__compressed_pair<unsigned long, std::__1::__unordered_map_hasher<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::hash<std::__1::basic_string<char> >, true> >=Q}{__compressed_pair<float, std::__1::__unordered_map_equal<std::__1::basic_string<char>, std::__1::__hash_value_type<std::__1::basic_string<char>, SKAttributeValue *>, std::__1::equal_to<std::__1::basic_string<char> >, true> >=f}}}@@^{SKCNode}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}{vector<SKCNode *, std::__1::allocator<SKCNode *> >=^^{SKCNode}^^{SKCNode}{__compressed_pair<SKCNode **, std::__1::allocator<SKCNode *> >=^^{SKCNode}}}@QfB{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}{list<SKCAction *, std::__1::allocator<SKCAction *> >={__list_node_base<SKCAction *, void *>=^{__list_node<SKCAction *, void *>}^{__list_node<SKCAction *, void *>}}{__compressed_pair<unsigned long, std::__1::allocator<std::__1::__list_node<SKCAction *, void *> > >=Q}}B@{shared_ptr<PKPath>=^{PKPath}^{__shared_weak_count}}BqBffBB{?=[4]}{?=[4]}i@BBff^{SKCSceneNode}^{SKCSceneNode}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_texture>=^{jet_texture}^{__shared_weak_count}}{shared_ptr<jet_framebuffer>=^{jet_framebuffer}^{__shared_weak_count}}{shared_ptr<jet_framebuffer>=^{jet_framebuffer}^{__shared_weak_count}}fBBBB}16@0:8, name: _backingNode
- (double)_duration;
@property(nonatomic) BOOL pausesOutgoingScene;
@property(nonatomic) BOOL pausesIncomingScene;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

