#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CBaseAnimGraph.hpp"
#include "source2sdk/client/C_BaseCombatCharacter_WaterWakeMode_t.hpp"
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
        // Size: 0x1208
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class C_BaseCombatCharacter : public source2sdk::client::CBaseAnimGraph
        {
        public:
            // metadata: MNotSaved
            // m_hMyWearables has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_NetworkUtlVectorBase<CHandle<source2sdk::client::C_EconWearable>> m_hMyWearables;
            char m_hMyWearables[0x18]; // 0x1180            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_leftFootAttachment; // 0x1198            
            // metadata: MNotSaved
            source2sdk::modellib::AttachmentHandle_t m_rightFootAttachment; // 0x1199            
            uint8_t _pad119a[0x2]; // 0x119a
            // metadata: MNotSaved
            source2sdk::client::C_BaseCombatCharacter_WaterWakeMode_t m_nWaterWakeMode; // 0x119c            
            // metadata: MNotSaved
            float m_flWaterWorldZ; // 0x11a0            
            // metadata: MNotSaved
            float m_flWaterNextTraceTime; // 0x11a4            
            uint8_t _pad11a8[0x60];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseCombatCharacter because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseCombatCharacter) == 0x1208);
    };
};
