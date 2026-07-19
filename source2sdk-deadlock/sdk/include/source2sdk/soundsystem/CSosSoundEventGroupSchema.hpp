#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/soundsystem/SosGroupFieldBehavior_t.hpp"
#include "source2sdk/soundsystem/SosGroupType_t.hpp"
namespace source2sdk
{
    namespace soundsystem
    {
        struct CSosGroupActionSchema;
    };
};

// /////////////////////////////////////////////////////////////
// Module: soundsystem
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace soundsystem
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x70
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        #pragma pack(push, 1)
        class CSosSoundEventGroupSchema
        {
        public:
            uint8_t _pad0000[0x8]; // 0x0
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupType_t m_nGroupType; // 0x8            
            // metadata: MPropertyStartGroup "+Block Events"
            bool m_bBlocksEvents; // 0xc            
            uint8_t _pad000d[0x3]; // 0xd
            // metadata: MPropertyReadonlyExpr
            std::int32_t m_nBlockMaxCount; // 0x10            
            // metadata: MPropertyStartGroup
            float m_flMemberLifespanTime; // 0x14            
            bool m_bInvertMatch; // 0x18            
            uint8_t _pad0019[0x3]; // 0x19
            // metadata: MPropertyStartGroup "+Event Name"
            // metadata: MPropertyAttributeEditor "Radio"
            // metadata: MPropertyReadonlyExpr
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_EventName; // 0x1c            
            // metadata: MPropertyReadonlyExpr
            CUtlString m_matchSoundEventName; // 0x20            
            // metadata: MPropertyStartGroup "+Event SubString"
            bool m_bMatchEventSubString; // 0x28            
            uint8_t _pad0029[0x7]; // 0x29
            // metadata: MPropertyReadonlyExpr
            CUtlString m_matchSoundEventSubString; // 0x30            
            // metadata: MPropertyStartGroup "+Ent Index"
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_EntIndex; // 0x38            
            // metadata: MPropertyReadonlyExpr
            float m_flEntIndex; // 0x3c            
            // metadata: MPropertyStartGroup "+OpVar Float"
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_Opvar; // 0x40            
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            float m_flOpvar; // 0x44            
            // metadata: MPropertyStartGroup "+OpVar String"
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            // metadata: MPropertyAttributeEditor "Radio"
            source2sdk::soundsystem::SosGroupFieldBehavior_t m_Behavior_String; // 0x48            
            uint8_t _pad004c[0x4]; // 0x4c
            // metadata: MPropertyReadonlyExpr
            // metadata: MPropertySuppressExpr "m_nGroupType == SOS_GROUPTYPE_STATIC"
            CUtlString m_opvarString; // 0x50            
            // metadata: MPropertyStartGroup
            // metadata: MPropertyAutoExpandSelf
            // m_vActions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::soundsystem::CSosGroupActionSchema*> m_vActions;
            char m_vActions[0x18]; // 0x58            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_nGroupType) == 0x8);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_bBlocksEvents) == 0xc);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_nBlockMaxCount) == 0x10);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_flMemberLifespanTime) == 0x14);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_bInvertMatch) == 0x18);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_EventName) == 0x1c);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_matchSoundEventName) == 0x20);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_bMatchEventSubString) == 0x28);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_matchSoundEventSubString) == 0x30);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_EntIndex) == 0x38);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_flEntIndex) == 0x3c);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_Opvar) == 0x40);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_flOpvar) == 0x44);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_Behavior_String) == 0x48);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_opvarString) == 0x50);
        static_assert(offsetof(source2sdk::soundsystem::CSosSoundEventGroupSchema, m_vActions) == 0x58);
        
        static_assert(sizeof(source2sdk::soundsystem::CSosSoundEventGroupSchema) == 0x70);
    };
};
