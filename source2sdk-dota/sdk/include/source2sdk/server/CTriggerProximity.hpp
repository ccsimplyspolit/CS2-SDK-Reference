#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CBaseTrigger.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x928
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CTriggerProximity : public source2sdk::server::CBaseTrigger
        {
        public:
            // m_hMeasureTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hMeasureTarget;
            char m_hMeasureTarget[0x4]; // 0x8f0            
            uint8_t _pad08f4[0x4]; // 0x8f4
            CUtlSymbolLarge m_iszMeasureTarget; // 0x8f8            
            float m_fRadius; // 0x900            
            std::int32_t m_nTouchers; // 0x904            
            // m_NearestEntityDistance has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<float> m_NearestEntityDistance;
            char m_NearestEntityDistance[0x20]; // 0x908            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTriggerProximity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTriggerProximity) == 0x928);
    };
};
