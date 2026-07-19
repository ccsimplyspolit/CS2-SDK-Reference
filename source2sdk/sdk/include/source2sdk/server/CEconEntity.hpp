#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CAttributeContainer.hpp"
#include "source2sdk/server/CBaseAnimGraph.hpp"
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
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0xc90
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CEconEntity : public source2sdk::server::CBaseAnimGraph
        {
        public:
            uint8_t _pad0960[0x18]; // 0x960
            source2sdk::server::CAttributeContainer m_AttributeManager; // 0x978            
            std::uint32_t m_OriginalOwnerXuidLow; // 0xc70            
            std::uint32_t m_OriginalOwnerXuidHigh; // 0xc74            
            std::int32_t m_nFallbackPaintKit; // 0xc78            
            std::int32_t m_nFallbackSeed; // 0xc7c            
            float m_flFallbackWear; // 0xc80            
            std::int32_t m_nFallbackStatTrak; // 0xc84            
            // m_hOldProvidee has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hOldProvidee;
            char m_hOldProvidee[0x4]; // 0xc88            
            std::int32_t m_iOldOwnerClass; // 0xc8c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CEconEntity because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CEconEntity) == 0xc90);
    };
};
