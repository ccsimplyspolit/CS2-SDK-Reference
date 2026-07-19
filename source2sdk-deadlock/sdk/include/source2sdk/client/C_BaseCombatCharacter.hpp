#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseCombatCharacter_WaterWakeMode_t.hpp"
#include "source2sdk/client/C_BaseFlex.hpp"
#include "source2sdk/modellib/AttachmentHandle_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_EconWearable;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xee8
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByUserGroup "LocalPlayerExclusive"
        // static metadata: MNetworkVarNames "CHandle<C_EconWearable > m_hMyWearables"
        #pragma pack(push, 1)
        class C_BaseCombatCharacter : public source2sdk::client::C_BaseFlex
        {
        public:
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnWearablesChanged"
            // metadata: MNotSaved
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_EconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0xe60            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_leftFootAttachment; // 0xe78            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_rightFootAttachment; // 0xe79            
            uint8_t _pad0e7a[0x2]; // 0xe7a
            // metadata: MNotSaved
            source2sdk::client::C_BaseCombatCharacter_WaterWakeMode_t m_nWaterWakeMode; // 0xe7c            
            // metadata: MNotSaved
            float m_flWaterWorldZ; // 0xe80            
            // metadata: MNotSaved
            float m_flWaterNextTraceTime; // 0xe84            
            uint8_t _pad0e88[0x60];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseCombatCharacter) == 0xee8);
    };
};
